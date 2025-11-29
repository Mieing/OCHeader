@class PersonalKaraokeAnchorGetItemListResponse_ResponseData;

@interface PersonalKaraokeAnchorGetItemListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PersonalKaraokeAnchorGetItemListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
