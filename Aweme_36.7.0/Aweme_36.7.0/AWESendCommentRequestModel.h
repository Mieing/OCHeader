@class NSString, AWECommentInputContentModel, NSDictionary;

@interface AWESendCommentRequestModel : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *generalItemID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *replyCommentID;
@property (copy, nonatomic) NSString *replySubCommentID;
@property (copy, nonatomic) NSString *replyCommentIDs;
@property (copy, nonatomic) NSString *replyCommentToken;
@property (copy, nonatomic) NSString *itemToken;
@property (retain, nonatomic) AWECommentInputContentModel *contentModel;
@property (copy, nonatomic) NSString *imageUriList;
@property (copy, nonatomic) NSString *imageHeights;
@property (copy, nonatomic) NSString *imageWidths;
@property (copy, nonatomic) NSString *imageFormats;
@property (copy, nonatomic) NSString *imageSources;
@property (copy, nonatomic) NSString *imageGPSList;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isFamiliar;
@property (nonatomic) BOOL isFromPaste;
@property (copy, nonatomic) NSString *lastCopyCommentID;
@property (copy, nonatomic) NSString *currentCommentCount;
@property (nonatomic) BOOL isNoNeedUserInfo;
@property (copy, nonatomic) NSString *liveIndexes;
@property (copy, nonatomic) NSString *vids;

- (id)generateRequestParamsDict:(Class)a0;
- (id)initWithPublishParameterModel:(id)a0;
- (id)generateGeneralItemParams;
- (void).cxx_destruct;

@end
