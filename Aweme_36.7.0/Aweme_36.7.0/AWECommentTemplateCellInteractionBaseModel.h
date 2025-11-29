@class NSNumber, AWECommentTemplateCellImageConfig;

@interface AWECommentTemplateCellInteractionBaseModel : NSObject

@property (retain, nonatomic) AWECommentTemplateCellImageConfig *config;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;
- (id)init;

@end
