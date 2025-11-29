@class _TtC22AWEKnowledgeSwiftBasic22FullPageSectionContext, NSString, AWEAwemeModel;

@interface AWEKnowledgeSwiftBasic.FullPageBaseItemViewModel : NSObject <AWEKnowledgeSwiftBasic.FullPageBaseItemViewModelProtocol> {
    void /* function */ sectionConfig;
    void /* unknown type, empty encoding */ cellBackgroundColor;
    void /* function */ identifier;
}

@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, retain) _TtC22AWEKnowledgeSwiftBasic22FullPageSectionContext *sectionContext;
@property (nonatomic, copy) id sectionConfig;
@property (nonatomic, readonly) double itemHeight;
@property (nonatomic, copy) NSString *identifier;

- (void)configWithSectionContext:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
