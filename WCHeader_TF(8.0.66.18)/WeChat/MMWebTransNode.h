@class NSString;

@interface MMWebTransNode : NSObject

@property (copy, nonatomic) NSString *hashCode;
@property (copy, nonatomic) NSString *orgText;
@property (copy, nonatomic) NSString *transText;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *styleList;
@property (copy, nonatomic) NSString *parentid;
@property (copy, nonatomic) NSString *grandparentid;
@property (copy, nonatomic) NSString *tagname;
@property (copy, nonatomic) NSString *greatGrandParentId;
@property (copy, nonatomic) NSString *grandTagname;
@property (copy, nonatomic) NSString *greatGrandTagname;
@property (nonatomic) BOOL isNodeInFirstScreen;
@property (nonatomic) BOOL isTitle;

- (void).cxx_destruct;

@end
