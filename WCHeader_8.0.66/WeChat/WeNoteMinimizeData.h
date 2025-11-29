@class NSString;

@interface WeNoteMinimizeData : NSObject <NSCoding>

@property (retain, nonatomic) NSString *chatUser;
@property (nonatomic) unsigned int mesLocalID;
@property (nonatomic) unsigned int favLocalId;
@property (retain, nonatomic) NSString *timeLineId;
@property (retain, nonatomic) NSString *localDataId;
@property (nonatomic) BOOL bEditable;
@property (nonatomic) unsigned int version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
