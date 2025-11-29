@class NSString, NSArray;

@interface CSJDislikeWords : NSObject <NSCoding>

@property (copy, nonatomic) NSString *dislikeID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSArray *options;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
