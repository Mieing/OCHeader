@class NSString;

@interface WCNewClickStatPageData : MMObject

@property (retain, nonatomic) NSString *pageID;
@property (nonatomic) unsigned int appearTimeStamp;
@property (nonatomic) unsigned int disappearTimeStamp;

+ (id)pageData:(id)a0 withAppearTimeStamp:(unsigned int)a1 withDisappearTimeStamp:(unsigned int)a2;

- (id)description;
- (void).cxx_destruct;

@end
