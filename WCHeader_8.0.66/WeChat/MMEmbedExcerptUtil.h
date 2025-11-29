@class NSMutableSet;

@interface MMEmbedExcerptUtil : NSObject

@property (retain, nonatomic) NSMutableSet *exposeReportStrSet;

+ (id)createEmbedExcerptWebview:(id)a0 scene:(unsigned int)a1 visibleViewController:(id)a2;
+ (id)createEmbedExcerptWebview:(id)a0 scene:(unsigned int)a1 subScene:(unsigned int)a2 visibleViewController:(id)a3 extraInfo:(id)a4;
+ (void)reportWithMsg:(id)a0 operateType:(unsigned int)a1;
+ (unsigned int)getEmbedExcerptSceneWithUrl:(id)a0;
+ (unsigned int)getEmbedExcerptSubsceneWithUrl:(id)a0 getScene:(unsigned int)a1;

- (void).cxx_destruct;

@end
