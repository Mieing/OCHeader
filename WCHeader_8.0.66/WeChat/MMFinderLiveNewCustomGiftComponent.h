@class NSString, NSArray;

@interface MMFinderLiveNewCustomGiftComponent : MMFinderLiveNewCustomGiftStyleObj <NSCopying>

@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSArray *componentValueList;
@property (retain, nonatomic) NSString *selectComponentKey;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) NSString *currentSelectComponentKey;
@property (copy, nonatomic) id /* block */ currSelectComponentKeyChangeCallback;

+ (id)transferFromComponentPB:(id)a0 business:(id)a1;
+ (BOOL)isComponentPBValid:(id)a0 business:(id)a1;

- (id)styleName;
- (BOOL)updateCurrentSelectComponentKey:(id)a0;
- (id)getCurrentSelectComponentValue;
- (BOOL)isCurrentSelectEqualToCustomizationConfig;
- (BOOL)synchronizeCurrentSelectToCustomizationConfig;
- (BOOL)recoverCurrentSelectFromCustomizationConfig;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getFirstComponentValueSupportCustomText;
- (void).cxx_destruct;

@end
