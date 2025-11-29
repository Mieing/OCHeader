@class NSString;

@interface ZXMultiFormatWriter : NSObject <ZXWriter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)writer;

- (id)encode:(id)a0 format:(int)a1 width:(int)a2 height:(int)a3 hints:(id)a4 error:(id *)a5;
- (id)encode:(id)a0 format:(int)a1 width:(int)a2 height:(int)a3 error:(id *)a4;

@end
