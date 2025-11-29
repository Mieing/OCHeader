@class NSData;

@interface RPApdu : NSObject

@property (copy, nonatomic) NSData *KS_ENC;
@property (copy, nonatomic) NSData *KS_MAC;
@property (copy, nonatomic) NSData *SSC;

- (id)RP_update_SSC:(id)a0;
- (id)RP_protectApdu:(id)a0;
- (id)RP_get_MAC:(id)a0 key:(id)a1;
- (id)RP_protect7816APDU:(id)a0;
- (id)RP_unprotectApdu:(id)a0 sw1:(unsigned char)a1 sw2:(unsigned char)a2;
- (void).cxx_destruct;

@end
