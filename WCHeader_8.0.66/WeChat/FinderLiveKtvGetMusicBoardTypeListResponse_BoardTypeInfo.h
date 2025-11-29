@class NSString, NSMutableArray;

@interface FinderLiveKtvGetMusicBoardTypeListResponse_BoardTypeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) NSString *boardName;
@property (retain, nonatomic) NSMutableArray *subBoardTypeInfoList;

+ (void)initialize;

@end
