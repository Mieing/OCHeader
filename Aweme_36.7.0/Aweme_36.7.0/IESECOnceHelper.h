@class NSSet, NSMutableSet;

@interface IESECOnceHelper : NSObject

@property (retain, nonatomic) NSMutableSet *onceSet;
@property (readonly, nonatomic) NSSet *identifiers;

- (void)remove:(id)a0;
- (BOOL)contains:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)visit:(id)a0;

@end
