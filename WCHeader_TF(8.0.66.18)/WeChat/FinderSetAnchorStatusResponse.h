@class NSData, NSString, BaseResponse;

@interface FinderSetAnchorStatusResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *anchorStatusBuffer;
@property (retain, nonatomic) NSString *tips;

+ (void)initialize;

@end
