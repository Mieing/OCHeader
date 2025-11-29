@class NSString, NSArray;

@interface IESLiveStickerUserModel : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSArray *avatarThumbURLList;

- (void).cxx_destruct;

@end
