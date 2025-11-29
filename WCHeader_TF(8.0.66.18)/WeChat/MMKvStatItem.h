@class NSString;

@interface MMKvStatItem : MMObject {
    unsigned int _logId;
    NSString *_seperator;
}

- (void)prepareForSerialization;
- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;

@end
