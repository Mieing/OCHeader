@class NSString;

@interface BDCastGCDWebServerMultiPartFile : BDCastGCDWebServerMultiPart

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *temporaryPath;

- (id)initWithControlName:(id)a0 contentType:(id)a1 fileName:(id)a2 temporaryPath:(id)a3;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
