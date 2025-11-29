@class NSData, NSString, BaseResponse;

@interface FinderLiveGetJumpInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *jumpInfoBuffer;
@property (retain, nonatomic) NSString *useSuggestions;

+ (void)initialize;

@end
