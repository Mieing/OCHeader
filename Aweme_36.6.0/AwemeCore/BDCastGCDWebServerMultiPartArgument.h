@class NSData, NSString;

@interface BDCastGCDWebServerMultiPartArgument : BDCastGCDWebServerMultiPart

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *string;

- (id)initWithControlName:(id)a0 contentType:(id)a1 data:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
