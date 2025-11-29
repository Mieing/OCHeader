@class NSString, IESECCommentPhotoModel, NSNumber, IESECHeadVideoModel;

@interface IESECCommentMediaItemViewModel : NSObject

@property (retain, nonatomic) NSNumber *commentID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *skuDescription;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) NSNumber *likesCount;
@property (nonatomic) BOOL liked;
@property (nonatomic) long long browserIndex;
@property (nonatomic) long long commentIndex;
@property (retain, nonatomic) IESECCommentPhotoModel *photo;
@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (nonatomic) long long photoCount;
@property (nonatomic) long long videoCount;

+ (id)transMediaModel:(id)a0;
+ (id)configNewMediaItem:(id)a0 video:(id)a1 photo:(id)a2 index:(long long)a3 commentIndex:(long long)a4;

- (void).cxx_destruct;

@end
