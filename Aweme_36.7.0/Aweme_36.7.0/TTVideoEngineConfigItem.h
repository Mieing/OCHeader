@class NSString;

@interface TTVideoEngineConfigItem : NSObject <TTVideoEngineConfigItemProtocol>

@property (nonatomic) long long key;
@property (nonatomic) long long executeKey;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) unsigned long long dataType;
@property (weak, nonatomic) id executeVariable;
@property (nonatomic) SEL executeSelector;
@property (nonatomic) unsigned long long actionArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)execute;
- (BOOL)isEqual:(id)a0;

@end
