@class IESGCPUserIntroduceCardStatusModel, NSArray;

@interface IESGCPRoomMetaMessage : NSObject

@property (nonatomic) unsigned long long operation;
@property (retain, nonatomic) IESGCPUserIntroduceCardStatusModel *userIntroduceCardStatus;
@property (retain, nonatomic) NSArray *userGiftStatusArray;

- (void).cxx_destruct;

@end
