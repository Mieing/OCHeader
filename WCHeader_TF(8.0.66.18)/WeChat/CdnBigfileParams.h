@class NSData, NSString;

@interface CdnBigfileParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *signture;
@property (retain, nonatomic) NSData *safecdnSignture;
@property (retain, nonatomic) NSString *safecdnSigntureAeskey;

+ (void)initialize;

@end
