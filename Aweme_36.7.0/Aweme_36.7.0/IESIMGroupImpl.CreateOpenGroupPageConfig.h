@class _TtC14IESIMGroupImpl32CreateOpenGroupPagePreloadConfig, NSString, NSDictionary, NSArray, _TtC14IESIMGroupImpl34CreateOpenGroupPageAgreementConfig, _TtC14IESIMGroupImpl29CreateOpenGroupPageInfoConfig, _TtC14IESIMGroupImpl32CreateOpenGroupPageConfirmConfig;

@interface IESIMGroupImpl.CreateOpenGroupPageConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ source;
    void /* function */ title;
    void /* function */ items;
    void /* function */ itemAlignment;
}

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) _TtC14IESIMGroupImpl29CreateOpenGroupPageInfoConfig *info;
@property (nonatomic, copy) NSDictionary *items;
@property (nonatomic, copy) NSArray *itemAlignment;
@property (nonatomic, retain) _TtC14IESIMGroupImpl34CreateOpenGroupPageAgreementConfig *agreement;
@property (nonatomic, retain) _TtC14IESIMGroupImpl32CreateOpenGroupPageConfirmConfig *confirm;
@property (nonatomic, retain) _TtC14IESIMGroupImpl32CreateOpenGroupPagePreloadConfig *preload;

+ (id)itemsJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)agreementJSONTransformer;
+ (id)confirmJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
