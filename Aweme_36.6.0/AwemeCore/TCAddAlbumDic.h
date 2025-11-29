@class NSString;

@interface TCAddAlbumDic : TCAPIRequest

@property (retain, nonatomic) NSString *paramAlbumname;
@property (retain, nonatomic) NSString *paramAlbumdesc;
@property (retain, nonatomic) NSString *paramPriv;
@property (retain, nonatomic) NSString *paramQuestion;
@property (retain, nonatomic) NSString *paramAnswer;

+ (id)dictionary;

- (void).cxx_destruct;

@end
