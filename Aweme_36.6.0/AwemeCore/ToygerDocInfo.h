@class NSString, NSArray;

@interface ToygerDocInfo : NSObject

@property (copy, nonatomic) NSString *docType;
@property (copy, nonatomic) NSString *pageNo;
@property (retain, nonatomic) NSArray *region;
@property (retain, nonatomic) NSArray *fields;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;

- (void).cxx_destruct;
- (id)init;

@end
