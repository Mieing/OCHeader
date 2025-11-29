@class NSString;

@interface AWESocialRelationRequest : NSObject

@property (nonatomic) BOOL isReadingAny;
@property (copy, nonatomic) NSString *scene;

+ (id)requestForScene:(id)a0;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
