@class NSArray;

@interface ACCAIGCVideoReferenceFrameCheckModel : NSObject

@property (copy, nonatomic) NSArray *validFrameIndex;
@property (nonatomic) double faceNum;
@property (nonatomic) double petNum;
@property (nonatomic) double age;
@property (nonatomic) double gender;
@property (nonatomic) BOOL invalid;
@property (nonatomic) BOOL isPolitics;
@property (nonatomic) BOOL isPorn;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;

@end
