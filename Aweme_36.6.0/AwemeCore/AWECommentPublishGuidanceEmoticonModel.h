@class NSString, AWECommentMiniEmoticonModel;

@interface AWECommentPublishGuidanceEmoticonModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentMiniEmoticonModel *emoticonModel;
@property (copy, nonatomic) NSString *mainTitleString;
@property (copy, nonatomic) NSString *emoticonString;
@property (nonatomic) long long emoticonNum;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long index;
@property (nonatomic) BOOL onlyText;
@property (readonly, nonatomic) long long recommendType;

- (void).cxx_destruct;

@end
