@class NSString;

@interface IESECTabKitPuzzleBridge : NSObject

@property (copy, nonatomic) NSString *method;
@property (nonatomic) unsigned long long authType;
@property (copy, nonatomic) id /* block */ handler;

+ (id)bridgeWithHandler:(id /* block */)a0 method:(id)a1 authType:(unsigned long long)a2;

- (void).cxx_destruct;

@end
