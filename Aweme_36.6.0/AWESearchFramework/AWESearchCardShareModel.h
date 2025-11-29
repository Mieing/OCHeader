@class NSString, NSDictionary, AWEAwemeModel;

@interface AWESearchCardShareModel : NSObject

@property (nonatomic) BOOL hidden;
@property (nonatomic) long long shareCount;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSDictionary *interactLogExtra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shareButtonFrame;

- (void).cxx_destruct;
- (id)init;

@end
