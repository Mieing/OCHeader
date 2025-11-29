@class NSString, NSMutableDictionary, AWEAwemeModel;

@interface AWEGCPCommentTabViewModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *originInitialData;
@property (nonatomic) BOOL preloadHybridViewDidUpdateData;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *lynxURL;

- (id)initWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)getSchema;

@end
