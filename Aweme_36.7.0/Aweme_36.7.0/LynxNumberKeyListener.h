@class NSString;

@interface LynxNumberKeyListener : NSObject <LynxKeyListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filter:(id)a0 start:(long long)a1 end:(long long)a2 dest:(id)a3 dstart:(long long)a4 dend:(long long)a5;
- (id)getAcceptedChars;
- (BOOL)checkCharIsInCharacterSet:(id)a0 character:(unsigned short)a1;
- (id)init;
- (long long)getInputType;

@end
