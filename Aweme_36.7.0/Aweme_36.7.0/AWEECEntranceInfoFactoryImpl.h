@class NSString;
@protocol IESECEntranceInfoFactory;

@interface AWEECEntranceInfoFactoryImpl : NSObject <AWEECEntranceInfoFactory>

@property (retain, nonatomic) id<IESECEntranceInfoFactory> entranceInfoFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)putAll:(id)a0;
- (void)putIf:(id)a0 condition:(id /* block */)a1;
- (id)initWithEntranceInfoFactory:(id)a0;
- (void).cxx_destruct;
- (void)deleteAll:(id)a0;

@end
