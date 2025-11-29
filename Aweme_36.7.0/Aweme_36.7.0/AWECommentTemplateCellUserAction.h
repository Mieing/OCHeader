@class NSString, NSDictionary;

@interface AWECommentTemplateCellUserAction : NSObject

@property (readonly, copy, nonatomic) NSString *event;
@property (readonly, copy, nonatomic) NSDictionary *params;

- (id)initWithEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
