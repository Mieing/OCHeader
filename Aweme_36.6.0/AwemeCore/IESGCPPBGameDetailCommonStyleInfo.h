@class IESGCPPBGameDetailCommonStyleHeaderInfo;

@interface IESGCPPBGameDetailCommonStyleInfo : GPBMessage

@property (retain, nonatomic) IESGCPPBGameDetailCommonStyleHeaderInfo *header;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) BOOL supportDownloadWhilePlay;
@property (nonatomic) BOOL supportMapPlay;
@property (retain, nonatomic) IESGCPPBGameDetailCommonStyleHeaderInfo *halfHeader;
@property (nonatomic) BOOL hasHalfHeader;
@property (nonatomic) BOOL useNewTopArea;
@property (nonatomic) BOOL useNewTab;
@property (nonatomic) BOOL useNewConvertArea;
@property (nonatomic) BOOL isNewHeadImageSize;
@property (nonatomic) long long welfareDisplayStyle;
@property (nonatomic) BOOL isNewHeaderSection;

+ (id)descriptor;

@end
