@class NSString;
@protocol AWELandscapeSpiltScreenDataControllerProtocol;

@interface AWELandscapeSplitScreenPreloadModel : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) id<AWELandscapeSpiltScreenDataControllerProtocol> dataController;

- (void).cxx_destruct;

@end
