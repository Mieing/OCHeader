@class AWEProfileExtensionAreaCardModel, NSString, NSDictionary, AWEUserModel;

@interface AWEProfileExtensionAreaTrackConfig : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (retain, nonatomic) id cardView;
@property (copy, nonatomic) NSString *cardIndex;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *coreParams;
@property (nonatomic) double stayDuration;

- (void).cxx_destruct;

@end
