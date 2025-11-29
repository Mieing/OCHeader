@class NSString;

@interface BDPScopeGameExtension : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title_hg;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *fullTitle;
@property (nonatomic) BOOL hasMark;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) double cellHeight_hg;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
