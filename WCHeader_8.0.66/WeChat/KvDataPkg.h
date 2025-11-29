@class NSString, NSMutableArray;

@interface KvDataPkg : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int cliver;
@property (nonatomic) unsigned int nettype;
@property (retain, nonatomic) NSMutableArray *dataitems;
@property (retain, nonatomic) NSString *devicemodel;
@property (retain, nonatomic) NSString *devicebrand;
@property (retain, nonatomic) NSString *osname;
@property (retain, nonatomic) NSString *osversion;
@property (retain, nonatomic) NSString *languagever;
@property (nonatomic) unsigned int datatype;

+ (void)initialize;

- (void)setDatatype:(unsigned int)a0;
- (unsigned int)datatype;
- (void)setLanguagever:(id)a0;
- (id)languagever;
- (void)setOsversion:(id)a0;
- (id)osversion;
- (void)setOsname:(id)a0;
- (id)osname;
- (void)setDevicebrand:(id)a0;
- (id)devicebrand;
- (void)setDevicemodel:(id)a0;
- (id)devicemodel;
- (void)setDataitems:(id)a0;
- (id)dataitems;
- (void)setNettype:(unsigned int)a0;
- (unsigned int)nettype;
- (void)setCliver:(unsigned int)a0;
- (unsigned int)cliver;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;

@end
