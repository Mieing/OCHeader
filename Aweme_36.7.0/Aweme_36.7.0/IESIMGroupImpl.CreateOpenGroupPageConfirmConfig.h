@class NSString;

@interface IESIMGroupImpl.CreateOpenGroupPageConfirmConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic) BOOL defaultEnable;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
