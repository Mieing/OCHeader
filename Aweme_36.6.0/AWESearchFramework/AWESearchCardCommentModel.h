@class NSString, NSDictionary, AWEAwemeModel;

@interface AWESearchCardCommentModel : NSObject

@property (nonatomic) BOOL hidden;
@property (nonatomic) long long commentCount;
@property (nonatomic) BOOL disableComment;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSDictionary *interactLogExtra;
@property (copy, nonatomic) NSDictionary *commentLogExtra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } commentButtonFrame;

- (void).cxx_destruct;
- (id)init;

@end
