@class NSString;

@interface AWEStudioPortraitImpl : NSObject <ACCPortraitGetterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)getPortraitAsFloat:(id)a0 defaultValue:(float)a1;
- (void)p_checkKey:(id)a0;
- (double)getPortraitAsDouble:(id)a0 defaultValue:(double)a1;
- (int)getPortraitAsInt:(id)a0 defaultValue:(int)a1;
- (long long)getPortraitAsLong:(id)a0 defaultValue:(long long)a1;
- (BOOL)getPortraitAsBool:(id)a0 defaultValue:(BOOL)a1;
- (id)getPortraitAsDictionary:(id)a0 defaultValue:(id)a1;
- (id)getPortraitAsArray:(id)a0 defaultValue:(id)a1;

@end
