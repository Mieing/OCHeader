@class NSString, NSDictionary, UIView;

@interface GXTrack : NSObject

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *nodeId;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void)setupTrackInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
