@class NSString, NSArray, NSNumber;

@interface IESECCommentShowNormalCellModel : NSObject

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSArray *userIconURLList;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;
@property (copy, nonatomic) NSString *photoPosterURL;
@property (copy, nonatomic) NSString *videoPosterCoverImageURL;
@property (copy, nonatomic) NSNumber *likesCount;
@property (nonatomic) BOOL liked;

- (void).cxx_destruct;

@end
