@class NSURL, NSString;

@interface AWEFriendsShareItem : NSObject

@property (retain, nonatomic) NSURL *userImgUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *suid;
@property (nonatomic) BOOL isFriend;
@property (nonatomic) struct CGSize { double width; double height; } labelSize;

- (id)initWithIMModel:(id)a0;
- (void).cxx_destruct;

@end
