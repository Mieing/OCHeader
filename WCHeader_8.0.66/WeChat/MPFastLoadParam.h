@class NSString, NSData;

@interface MPFastLoadParam : NSObject

@property (nonatomic) BOOL hasItemShowType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int enterType;
@property (copy, nonatomic) NSString *urlForReport;
@property (copy, nonatomic) NSData *coverImageData;

- (id)description;
- (void).cxx_destruct;

@end
