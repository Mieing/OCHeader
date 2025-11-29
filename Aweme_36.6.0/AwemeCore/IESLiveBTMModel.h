@class UIResponder;

@interface IESLiveBTMModel : NSObject

@property (nonatomic) unsigned long long btmSource;
@property (retain, nonatomic) UIResponder *view;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) unsigned long long btmTarget;
@property (nonatomic) long long index;

- (id)btmPageIdentifier:(unsigned long long)a0;
- (id)btmPageIdentifier:(unsigned long long)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
