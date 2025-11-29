@class NSString, NSMutableArray;

@interface MessagePatternList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_messagePatternList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_messagePatternList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
