@class BaseComponent, GPBInt32ObjectDictionary;

@interface CreateButtonComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (retain, nonatomic) GPBInt32ObjectDictionary *buttonText;
@property (readonly, nonatomic) unsigned long long buttonText_Count;

+ (id)descriptor;

@end
