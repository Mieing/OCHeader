@class PersonalKaraokeAnchorAddFavoriteResponse_ResponseData;

@interface PersonalKaraokeAnchorAddFavoriteResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PersonalKaraokeAnchorAddFavoriteResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
