@class NSString, HTSLiveNewPinCommon;

@interface HTSLiveNewHighlightDataComment : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long chatId;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *commenterId;
@property (nonatomic) long long msgId;
@property (nonatomic) long long preId;
@property (retain, nonatomic) HTSLiveNewPinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
