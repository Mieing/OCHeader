@class NSArray, NSAttributedString, NSString;

@interface HTSLiveImageToastNode : NSObject

@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) NSArray *imageUrlList;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL showMongoliaLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isCoin;

- (BOOL)valid;
- (void).cxx_destruct;

@end
