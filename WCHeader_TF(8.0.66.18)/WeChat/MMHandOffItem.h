@class NSString, MMHandOffAttributes;

@interface MMHandOffItem : MMObject <NSCopying>

@property (retain, nonatomic) MMHandOffAttributes *_XMLAttributes;
@property (nonatomic) long long handofftype;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *displaySourceName;
@property (nonatomic) long long opCode;
@property (nonatomic) unsigned int receiveSeqNum;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)initWith:(long long)a0;
- (id)getXML;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromMinimizeTaskData:(id)a0;
- (void).cxx_destruct;

@end
