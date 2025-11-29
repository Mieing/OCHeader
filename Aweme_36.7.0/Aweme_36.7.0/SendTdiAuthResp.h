@class NSString, NSData;

@interface SendTdiAuthResp : SendAuthResp

@property (copy, nonatomic) NSString *tdiExtInfo;
@property (retain, nonatomic) NSData *tdiAuthBuffer;
@property (retain, nonatomic) NSData *tdiAuthParams;

- (void).cxx_destruct;

@end
