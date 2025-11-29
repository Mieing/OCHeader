@class NSString;
@protocol IESECEntranceInfo;

@interface AWEECEntranceInfoImpl : NSObject <AWEECEntranceInfo>

@property (retain, nonatomic) id<IESECEntranceInfo> entranceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objValueForKey:(id)a0;
- (id)entranceInfoString;
- (id)entranceInfoDict;
- (id)composeFactory;
- (id)initWithEntranceInfo:(id)a0;
- (void).cxx_destruct;
- (long long)integerValueForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (id)numberValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;

@end
