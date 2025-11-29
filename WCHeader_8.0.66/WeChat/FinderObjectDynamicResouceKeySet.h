@class FinderObjectDynamicIconKeySet, FinderObjectDynamicWordingKeySet, FinderObjectDynamicPagKeySet;

@interface FinderObjectDynamicResouceKeySet : WXPBGeneratedMessage

@property (retain, nonatomic) FinderObjectDynamicIconKeySet *icon;
@property (retain, nonatomic) FinderObjectDynamicWordingKeySet *wording;
@property (retain, nonatomic) FinderObjectDynamicPagKeySet *pag;

+ (void)initialize;

- (void)setPag:(id)a0;
- (id)pag;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setIcon:(id)a0;
- (id)icon;

@end
