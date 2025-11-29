@class NSString, NSURL, AWEUserModel;

@interface AWEIMMultiTabShareSingleListCellViewModel : NSObject

@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSURL *avatarURL;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (nonatomic) BOOL hasClick;

- (void).cxx_destruct;

@end
