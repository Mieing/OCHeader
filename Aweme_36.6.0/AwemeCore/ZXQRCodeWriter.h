@class NSString;

@interface ZXQRCodeWriter : NSObject <ZXWriter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encode:(id)a0 format:(int)a1 width:(int)a2 height:(int)a3 hints:(id)a4 error:(id *)a5;
- (id)renderResult:(id)a0 width:(int)a1 height:(int)a2 quietZone:(int)a3;
- (id)encode:(id)a0 format:(int)a1 width:(int)a2 height:(int)a3 error:(id *)a4;

@end
