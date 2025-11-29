@class NSArray;

@interface AWEIMFoldMessageClassifyUtility : NSObject

@property (copy, nonatomic) NSArray *textTypeMessageArr;
@property (copy, nonatomic) NSArray *imageTypeMessageArr;
@property (copy, nonatomic) NSArray *videoTypeMessageArr;

+ (id)sharedInstance;

- (long long)transferMessageTypeToFoldMessageType:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
